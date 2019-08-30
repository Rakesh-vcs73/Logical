/*This code is not working for February as the days are varying so check the logic once again*/
#include <stdio.h>
#include <stdlib.h>
int flag=0;
int dateinmonth(int day,int year)
{
    switch(day)
    {
        case 1:
            return 31;
            break;
        case 2:
            leapyear(year);
            if(flag==1)
                return 29;
            else
                return 28;
                break;
        case 3:
            return 31;
            break;
        case 4:
            return 30;
            break;
        case 5:
            return 31;
            break;
        case 6:
            return 30;
            break;
        case 7:
            return 31;
            break;
        case 8:
            return 31;
            break;
        case 9:
            return 30;
            break;
        case 10:
            return 31;
            break;
        case 11:
            return 30;
            break;
        case 12:
            return 31;
            break;
    }
}

int leapyear(year)
{
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
        flag=1;
    else
        flag=0;
 return flag;
}

int main()
{
    int date,month,year,pdate,pmonth,pyear,adate,amonth,ayear,i,j;
    amonth=adate=ayear=0;
    printf("AGE CALCULATOR\nPlease enter a valid Date\n");
    printf("Enter Your Date Of Birth in DD/MM/YYYY format\n");
    scanf("%d/%d/%d",&date,&month,&year);
    if(date>31||month>12||year>9999||((date||month||year)==00))
    {
        printf("Entered year is invalid!!!\n");
        return(0);
    }
    else if(month==2&&date>dateinmonth(month,year))
    {
        printf("ERROR !!!February has only 28/29 days\n\n");
    }
    else
    {
        printf("Enter Present Date in DD/MM/YYYY format\n");
        scanf("%d/%d/%d",&pdate,&pmonth,&pyear);
         if(pdate>31||pmonth>12||pyear>9999||((pdate||pmonth||pyear)==00))
         {
             printf("Entered year is invalid!!!\n");
             return(0);
         }
         else if(pmonth==2&&pdate>dateinmonth(pmonth,pyear))
         {
             printf("ERROR !!!February has only 28/29 days\n\n");
            return(0);
         }
         else
         {
             ayear=pyear-year;
             if(pmonth==month)
             {
                 amonth=0;
                 if(pdate==date)
                 {
                     adate=0;

                     printf("HAPPY %d th BIRTHDAY",ayear);
                 }
                 else if(pdate>date)
                 {
                     adate=pdate-date;

                 }
                 else
                 {
                     amonth=11;
                     ayear=ayear-1;
                     adate=(dateinmonth(month,year)-date)+pdate;

                 }
             }
             else if(pmonth>month)
             {
                 amonth=pmonth-month;
                 if(pdate==date)
                 {
                     adate=0;

                 }
                 else if(pdate>date)
                 {
                     adate=pdate-date;

                 }
                 else
                 {
                     amonth=amonth-1;
                     adate=(dateinmonth(month,year)-date)+pdate;

                 }
             }
             else
             {
                 ayear=ayear-1;
                 amonth=(12-month)+pmonth;
                 if(pdate==date)
                 {
                     adate=0;

                 }
                 else if(pdate>date)
                 {
                     adate=pdate-date;

                 }
                 else
                 {
                     amonth=amonth-1;
                     adate=(dateinmonth(month,year)-date)+pdate;
                 }
             }
             if(month==2)
             {
                 leapyear(year);
                 if(flag==1)
                 {
                     adate=adate-1;
                 }

             }
             if(pmonth==2)
             {
                 leapyear(pyear);
                 if(flag==1)
                 {
                     adate=adate-1;
                 }
             }
         }
         printf("\nYour Age is %d years %d months %d days\n",ayear,amonth,adate);
    }
}
