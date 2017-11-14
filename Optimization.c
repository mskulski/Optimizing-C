include <stdlib.h>
include <math.h>
#include <unistd.h>
#include <stdio.h>

double point[6][5];
double units = {0.001,0.001,0.001,1,1};
double start[5];
double run_point[5];
double unit_vector[5][5];
unit_vector[0]={1,0,0,0,0};

int direction_sign;
int steps;
double norm;

void main()
{

double current_max = get_current();
get_point();
for(int j =0;j<5;j++)
{
	start[j]=run_point[j];
	point[0][j]=run_point[j];
}

for(int i=0;i<5;i++)
{
	if(i>0)
	{
		kick_element(i);
	}
	
	for(int k=0;k<i;k++)
	{
		steps = 0;
		direction_sign = 1;
		int good = 0;
		while(good == 0)
		{
			change_values(k,direction_sign);
			double current_new = get_current();
			if(current_new > current_max)
			{
				steps++;
				current_max = current_new;
				get_point();
				for(int j=0;j<5;j++)
				{
					point[i+1][j]=run_point[j];
				}
			}
			else if(current_new < current_max)]
			{
				if(steps > 0)
				{
					good=1;
				}
				else if(steps == 0)
				{
					steps++;
					direction_sign = -1;
				}
			}
		}
	}
	
	norm=0;
	for(int j=0;j<5;j++)
	{
		norm += pow(point[i+1][j]-point[i][j],2);
	}
	norm = sqrt(norm);
	for(int j=0;j<5;j++)
	{
		if(norm!=0)
		{
			unit_vector[i][j]=(1/norm)*(point[i+1][j]-point[i][j]);
		}
		else{	unit_vector[i][j]=0;}
	}
	
	

}
	
void get_point()
{
	run_point[0]=
	run_point[1]=
	run_point[2]=
	run_point[3]=
	run_point[4]=
}

double get_current()
{
	double current_ave;
	for(int j=0;j<3;j++)
	{
		double current = 
		sleep(1);
		current_ave += current_ave + current/3;
	}
	return current_ave;
}

void change_values(int vector_number,int sign)
{
	get_point();
	double new_values[5];
	for(int j=0;j<5;j++)
	{
		new_values[j]=run_point[j]+10*unit_vector[vector_number][j]*units[j]*sign;
	}
}

void kick_element(int index)
{
	get_point();
	double new_value = run_point[index] + 50*units[index];
	
	sleep(1);
}
