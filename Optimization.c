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
		change_element(i);
	}
	
	for(int k=0;k<i;k++)
	{
		direction_sign = 1;
		int reverse = 0;
		while(reverse > -2)
		{
			change_values(k,direction_sign);
			sleep(1);
			double current_new = get_current();
			if(current_new > current_max)
			{
				current_max = current_new;
			}
			else if(current_new < current_max)]
			{
				direction_sign = -1;
				reverse--;
			}
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

void change_element(int index)
{
	get_point();
	double new_value = run_point[index] + 50*units[index];
}
