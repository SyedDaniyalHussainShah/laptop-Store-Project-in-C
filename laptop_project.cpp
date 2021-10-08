#include<stdio.h>
#include<string.h>
struct date{
	int day;
	int month;
	int year;
};
struct cpu
{
	char mdl[100];
	char clock[100];
	int generation;
};
struct lptp{
	char model[100];
	char category[100];
	char series[100];
	cpu spec;
	date release;
	char gpu[100];
	char storage[100];
	char memory[100];
	char screen[100];
	float price;
	char ioport[100];
	char keyboard[100];
	char communication[100];
	char status;
	char os[100];
};
void allRecord(lptp []);
void sortByDate(lptp []);
void sortByPrice(lptp []);
void findByModel(lptp []);
void searchByMinAmount(lptp []);
void searchByMaxAmount(lptp []);
void selectSeries(lptp []);
void selectCategory(lptp []);
void searchByCPUModel(lptp []);
void searchByCPUGeneration(lptp []);
void availableModels(lptp []);
void selectGPUModel(lptp []);
void sorfBySeries(lptp []);
int main()
{
	printf("Welcome to ASUS Laptop Management Software\n\n");
	lb:
	
	int choice,check;
	lptp asus[20]={{"PRO 15 UX580GE","PORTABLE","ZENBOOK","i7-8750h","4.80GHz",8,10,01,2018,"NVIDIA GTX 1050TI","1TB SSD","16GB DDR4","15.6 inch TOUCHSCREEN UHD",224000,"2x TYPE C with THUNDERBOLT support,2x USB 3.1,1x HDMI,1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 5.0",'A',"WINDOWS 10 HOME"},
	{"UX510UX","PORTABLE","ZENBOOK","i5-6200u","2.80GHz",6,18,6,2017,"NVIDIA GTX 950M","500GB HDD","8GB SDRAM","15.6 inch UHD",168000,"2x USB 3.0, 2x USB 2.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 4,BT 4.1",'N',"WINDOWS 10 HOME"},
	{"14 UX434FLC","PORTABLE","ZENBOOK","i7-10510u","4.90GHz",10,10,12,2019,"NVIDIA MX250","1TB SSD","16GB LPDDR3 RAM","14.0 inch FHD",265000,"2x TYPE C with THUNDERBOLT support, 2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","WIFI 6,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"15 X510UA","PORTABLE","VIVOBOOK","i7-7500u","3.50GHz",7,6,11,2018,"INTEGRATED","1TB HDD + 256GB SSD","8GB SDRAM","15.6 inch FHD",86000,"3x USB 2.0, 1x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 4.2",'N',"WINDOWS 10 HOME"},
	{"14 U405UA","PORTABLE","VIVOBOOK","i7-7500u","3.50GHz",7,18,11,2018,"INTEGRATED","512GB SSD","8GB DDR4 RAM","14.0 inch FHD",89000,"1x RJ45 LAN Jack, 3x USB 2.0, 1x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 4.2",'A',"WINDOWS 10 HOME"},
	{"X507UA","EVERYDAY COMPUTING","ASUS LAPTOP SERIES","i7-8550u","4.0GHz",8,2,3,2019,"INTEGRATED","1TB HDD + 128GB SSD","8GB SDRAM","15.6 inch FHD",93000,"1x RJ45 LAN Jack, 2x USB 2.0, 1x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 4.2",'A',"WINDOWS 10 PRO"},
	{"X407UA","EVERYDAY COMPUTING","ASUS LAPTOP SERIES","i7-8550u","4.0GHz",8,26,2,2019,"INTEGRATED","1TB HDD","8GB SDRAM","14.0 inch FHD",90000,"1x RJ45 LAN Jack, 2x USB 2.0, 1x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 4.2",'A',"WINDOWS 10 HOME"},
	{"PRO P3540FA","BUSINESS USE","COMMERCIAL SERIES","i7-8565u","4.60GHz",8,17,3,2019,"INTEGRATED","1TB HDD + 256GB SSD","16GB SDRAM","15.6 inch FHD",80000,"1x RJ45 LAN Jack, 2x USB 2.0, 2x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 4.1",'A',"WINDOWS 10 PRO"},
	{"PRO P2440UA","BUSINESS USE","COMMERCIAL SERIES","i7-7500u","3.50GHz",8,11,11,2018,"INTEGRATED","1TB HDD + 128GB SSD","8GB SDRAM","14.0 inch FHD",71000,"1x RJ45 LAN Jack, 2x USB 2.0, 2x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","CHICKLET","WIFI 5,BT 4.1",'A',"WINDOWS 10 PRO"},
	{"EXPERTBOOK P5440FF","BUSINESS USE","COMMERCIAL SERIES","i7-8565u","4.60GHz",8,24,3,2019,"NVIDIA MX130","1TB HDD + 128GB SSD","8GB DDR4 RAM","14.0 inch FHD",110000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack, 2x USB 2.0, 2x USB 3.0, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","WIFI 5,BT 4.2",'A',"WINDOWS 10 PRO"},
	{"14 C425TA","CHROME OS","CHROMEBOOK SERIES","i5-8200y","3.90GHz",8,22,3,2018,"INTEGRATED","128GB eMMC","4GB onboard RAM","14.0 inch FHD",42000,"1x TYPE C 3.0 (THUNDERBOLT), 1x Micro SD card slot, 2x USB 3.0","ILLUMINATED CHICKLET","WIFI 5,BT 5.0",'A',"CHROME"},
	{"FLIP C433TA","CHROME OS","CHROMEBOOK SERIES","i5-8200y","3.90GHz",8,20,3,2018,"INTEGRATED","128GB eMMC","4GB LPDDR3 RAM","14.0 inch FHD",40000,"1x TYPE C 3.0 (THUNDERBOLT), 1x Micro SD card slot, 2x USB 3.0","ILLUMINATED CHICKLET","WIFI 5,BT 4.0",'A',"CHROME"},
	{"G703","HIGH END","ROG (REPUBLIC OF GAMERS)","i9-9750h","4.50GHz",9,25,5,2019,"NVIDIA RTX 2080","1TB SSHD + 256GB SSD","64GB DDR4 RAM","17.3 inch UHD",610000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,1x USB 3.0,3x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"GX501","HIGH END","ROG (REPUBLIC OF GAMERS)","i7-8750h","4.10GHz",8,14,3,2019,"NVIDIA RTX 2070","1TB HDD + 512GB SSD","64GB DDR4 RAM","15.6 inch FHD",505000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"GL702VS","HIGH END","ROG (REPUBLIC OF GAMERS)","i7-8750h","4.10GHz",8,13,1,2019,"NVIDIA GTX 1070","1TB HDD + 512GB SSD","32GB DDR4 RAM","17.3 inch FHD",365000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"STRIX SCAR 2","HIGH END","ROG (REPUBLIC OF GAMERS)","i7-8750h","4.10GHz",8,6,3,2019,"NVIDIA RTX 2070","1TB SSHD + 512GB SSD","64GB DDR4 RAM","17.3 inch UHD",575000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"FX505GT","HIGH END","TUF (THE ULTIMATE FORCE)","i7-9750h","4.50GHz",9,2,3,2019,"NVIDIA GTX 1070","512GB SSD","32GB DDR4 RAM","15.6 inch FHD",390000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"FX505DV","HIGH END","TUF (THE ULTIMATE FORCE)","i9-9750h","4.50GHz",9,8,5,2019,"NVIDIA GTX 1080","1TB SSD","64GB DDR4 RAM","17.3 inch UHD",460000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"FX505DY","HIGH END","TUF (THE ULTIMATE FORCE)","i7-8750h","4.10GHz",8,29,2,2019,"NVIDIA GTX 1080","1TB SSHD + 256GB SSD","32GB DDR4 RAM","15.6 inch FHD",419000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"},
	{"FX705DX","HIGH END","TUF (THE ULTIMATE FORCE)","i7-8750h","4.10GHz",8,22,4,2019,"NVIDIA GTX 1070","512GB SSHD + 512GB SSD","32GB DDR4 RAM","15.6 inch FHD",402000,"1x TYPE C 3.0 (THUNDERBOLT), 1x RJ45 LAN Jack,2x USB 3.0,2x USB 3.1, 1x HDMI, 1x COMBO AUDIO JACK","BACKLIT ILLUMINATED CHICKLET","Gigabit WIFI,BT 5.0",'A',"WINDOWS 10 PRO"}
	};
	
	printf("Enter Your Choice\n");
	printf("1 : All Record\n");
	printf("2 : Sort By Release Date\n");
	printf("3 : Sort By Price\n");
	printf("4 : Find By Laptop Model\n");
	printf("5 : Search By Entering Minimum Amount\n");
	printf("6 : Search By Entering Maximum Amount\n");
	printf("7 : Category\n");
	printf("8 : Series\n");
	printf("9 : Choose CPU Model\n");
	printf("10: Choose CPU Generation\n");
	printf("11: Select GPU\n");
	printf("12: Available Models\n");
	printf("13: Sort By Series\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		allRecord(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		a:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto a;
		}
		break;
		
		case 2:
		sortByDate(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		b:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto b;
		}
		break;
		
		case 3:
		sortByPrice(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		c:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto c;
		}
		break;
		
		case 4:
		findByModel(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		d:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto d;
		}
		break;		
		
		case 5:
		searchByMinAmount(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		e:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto e;
		}
		break;
		
		case 6:
		searchByMaxAmount(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		f:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto f;
		}
		break;	
		
		case 7:
		selectCategory(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		g:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto g;
		}
		break;
		
		case 8:
		selectSeries(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		h:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto h;
		}
		break;
		
		case 9:
		searchByCPUModel(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		i:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto i;
		}
		break;
		
		case 10:
		searchByCPUGeneration(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		j:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto j;
		}
		break;	
		
		case 11:
		selectGPUModel(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		k:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto k;
		}
		break;
		
		case 12:
		availableModels(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		l:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto l;
		}
		break;
		
		case 13:
		sorfBySeries(asus);
		printf("\n\nif you want to go to main menu press 1 else press 0\n");
		m:
		scanf("%d",&check);
		if(check==1)
		{
			goto lb;
		}
		else if(check!=0)
		{
			printf("Please Enter Valid Number\n");
			goto m;
		}
		break;
	}
}
void allRecord(lptp a[])
{
	for(int i=0;i<=19;i++)
	{
		printf("Laptop No. %d\n",i+1);
		printf("Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("Series:\t%s\n",a[i].series);
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
	}
}
void sortByDate(lptp a[])
{
	lptp swap[20];
	for(int k=0;k<=18;k++)
{
	for(int i=0;i<=18;i++)
	{
		if(a[i].release.day<a[i+1].release.day)
		{
		  swap[i]=a[i];
		  a[i]=a[i+1];
		  a[i+1]=swap[i];	
		}
	}
}

	for(int k=0;k<=18;k++)
{
	for(int i=0;i<=18;i++)
	{
		if(a[i].release.month<a[i+1].release.month)
		{
		  swap[i]=a[i];
		  a[i]=a[i+1];
		  a[i+1]=swap[i];	
		}
	}
}
	for(int k=0;k<=18;k++)
{
	for(int i=0;i<=18;i++)
	{
		if(a[i].release.year<a[i+1].release.year)
		{
		  swap[i]=a[i];
		  a[i]=a[i+1];
		  a[i+1]=swap[i];	
		}
	}
}   
for(int i=0;i<=19;i++)
	{
		printf("Laptop No. %d\n",i+1);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("Series:\t%s\n",a[i].series);
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
	}
}
void sortByPrice(lptp a[])
{
	lptp swap[20];
	for(int k=0;k<=18;k++)
{
	for(int i=0;i<=18;i++)
	{
		if(a[i].price>a[i+1].price)
		{
		  swap[i]=a[i];
		  a[i]=a[i+1];
		  a[i+1]=swap[i];	
		}
	}
}
for(int i=0;i<=19;i++)
	{
		printf("Laptop No. %d\n",i+1);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("Series:\t%s\n",a[i].series);
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
	}
}
void findByModel(lptp a[])
{
	printf("enter model\nuse only capital letters\n");
	char mdl1[50];
	int check;
	int check1;
	gets(mdl1);
	for(int i=0;i<=19;i++)
	{
		check=strcmp(mdl1,a[i].model);
		if(check==0)
	{
		printf("model found\nif you want to see full specs press 1\n");
		scanf("%d",&check1);
		if(check1==1)
		{
		printf("Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("Series:\t%s\n",a[i].series);
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
		}
		break;
	}
	}
	if(check!=0)
	{
		printf("model not found\n");
	}
}
void searchByMinAmount(lptp a[])
{
	lptp swap[20];
	float minamnt;
	lptp b[20];
	int count=0;
	printf("enter minimum amount\n");
	scanf("%f",&minamnt);
	for(int i=0;i<=19;i++)
	{
		if(a[i].price>=minamnt)
		{
		b[count]=a[i];
		count++;
		}
	}
	if(count==0)
	{
		printf("no laptop found with price greater than %.2f\n",minamnt);
	}
	if(count>0)
	{
	for(int k=0;k<=count-2;k++)
{
	for(int i=0;i<=count-2;i++)
	{
		if(b[i].price>b[i+1].price)
		{
		  swap[i]=b[i];
		  b[i]=b[i+1];
		  b[i+1]=swap[i];	
		}
	}	
	}
	for(int i=0;i<=count-1;i++)
	{
		printf("Laptop No. %d\n",i+1);
		printf("Price:\tRs %.2f\n",b[i].price);
		printf("Model:\t%s\n",b[i].model);
		printf("Category:  %s\n",b[i].category);
		printf("Series:\t%s\n",b[i].series);
		printf("CPU Model:  %s\n",b[i].spec.mdl);
		printf("CPU Clock:  %s\n",b[i].spec.clock);
		printf("CPU Generation:  %d\n",b[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",b[i].release.day,b[i].release.month,b[i].release.year);
		printf("GPU:\t%s\n",b[i].gpu);
		printf("Storage:\t%s\n",b[i].storage);
		printf("Memory:\t%s\n",b[i].memory);
		printf("Screen Info:  %s\n",b[i].screen);
		printf("I/O Ports:  %s\n",b[i].ioport);
		printf("Keyboard Info:  %s\n",b[i].keyboard);
		printf("Communication:  %s\n",b[i].communication);
		printf("Status:\t%c\n",b[i].status);
		printf("Operating System:  %s\n\n\n",b[i].os);
	}
}
}
void searchByMaxAmount(lptp a[])
{
	lptp swap[20];
	float maxamnt;
	lptp c[20];
	int count=0;
	printf("enter maximum amount\n");
	scanf("%f",&maxamnt);
	for(int i=0;i<=19;i++)
	{
		if(a[i].price<=maxamnt)
		{
		c[count]=a[i];
		count++;
		}
	}
	if(count==0)
	{
		printf("no laptop found with price greater than %.2f\n",maxamnt);
	}
	if(count>0)
	{
	for(int k=0;k<=count-2;k++)
{
	for(int i=0;i<=count-2;i++)
	{
		if(c[i].price<c[i+1].price)
		{
		  swap[i]=c[i];
		  c[i]=c[i+1];
		  c[i+1]=swap[i];	
		}
	}	
	}
	for(int i=0;i<=count-1;i++)
	{
		printf("Laptop No. %d\n",i+1);
		printf("Price:\tRs %.2f\n",c[i].price);
		printf("Model:\t%s\n",c[i].model);
		printf("Category:  %s\n",c[i].category);
		printf("Series:\t%s\n",c[i].series);
		printf("CPU Model:  %s\n",c[i].spec.mdl);
		printf("CPU Clock:  %s\n",c[i].spec.clock);
		printf("CPU Generation:  %d\n",c[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",c[i].release.day,c[i].release.month,c[i].release.year);
		printf("GPU:\t%s\n",c[i].gpu);
		printf("Storage:\t%s\n",c[i].storage);
		printf("Memory:\t%s\n",c[i].memory);
		printf("Screen Info:  %s\n",c[i].screen);
		printf("I/O Ports:  %s\n",c[i].ioport);
		printf("Keyboard Info:  %s\n",c[i].keyboard);
		printf("Communication:  %s\n",c[i].communication);
		printf("Status:\t%c\n",c[i].status);
		printf("Operating System:  %s\n\n\n",c[i].os);
	}
}
}
void selectSeries(lptp a[])
{
	int num,count;
	lb:
	printf("Select Series\n");
	printf("Press 1 for: Zenbook Series\n");
	printf("Press 2 for: VivoBook Series\n");
	printf("Press 3 for: ASUS Laptop Series\n");
	printf("Press 4 for: Commercial Series\n");
	printf("Press 5 for: ROG (Republic Of Gamers) Series\n");
	printf("Press 6 for: TUF (The Ultimate Force) Series\n");
	printf("Press 7 for: Chromebook Series\n");
	scanf("%d",&num);
	        if(num==1)
	        {
			char zen[20]="ZENBOOK";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(zen,a[i].series);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==2)
	{

			char vivo[9]="VIVOBOOK";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(vivo,a[i].series);
				if(check==0)
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
	    	}
	}
	else if(num==3)
	{

			char asus1[20]="ASUS LAPTOP SERIES";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(asus1,a[i].series);
				if(check==0)
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
	    	}
	}
	else if(num==4)
	{

			char commercial[20]="COMMERCIAL SERIES";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(commercial,a[i].series);
				if(check==0)
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
	    	}
	}
	else if(num==5)
	{

			char rog[30]="ROG (REPUBLIC OF GAMERS)";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(rog,a[i].series);
				if(check==0)
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
	    	}
	}
	else if(num==6)
	{

			char tuf[30]="TUF (THE ULTIMATE FORCE)";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(tuf,a[i].series);
				if(check==0)
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
	    	}
	}
	else if(num==7)
	{

			char chrome[30]="CHROMEBOOK SERIES";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(chrome,a[i].series);
				if(check==0)
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
	    	}
	}
	else
		{
			printf("Please Enter correct number\n");
			goto lb;
		}
}
void selectCategory(lptp a[])
{
	int num,count;
	lb:
	printf("Select Category\n");
	printf("Press 1 for: Portable Laptops\n");
	printf("Press 2 for: Everyday Computing Laptops\n");
	printf("Press 3 for: Bussiness Use Laptops\n");
	printf("Press 4 for: High End Laptops\n");
	printf("Press 5 for: Chrome OS Laptops\n");
	scanf("%d",&num);
	        if(num==1)
	        {
			char port[20]="PORTABLE";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(port,a[i].category);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("Category:  %s\n",a[i].category);
					printf("Series:\t%s\n",a[i].series);
					printf("Model:\t%s\n",a[i].model);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==2)
	        {
			char every[20]="EVERYDAY COMPUTING";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(every,a[i].category);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("Category:  %s\n",a[i].category);
					printf("Series:\t%s\n",a[i].series);
					printf("Model:\t%s\n",a[i].model);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==3)
	        {
			char bussiness[20]="BUSINESS USE";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(bussiness,a[i].category);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("Category:  %s\n",a[i].category);
					printf("Series:\t%s\n",a[i].series);
					printf("Model:\t%s\n",a[i].model);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==4)
	        {
			char high[20]="HIGH END";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(high,a[i].category);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("Category:  %s\n",a[i].category);
					printf("Series:\t%s\n",a[i].series);
					printf("Model:\t%s\n",a[i].model);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==5)
	        {
			char chrome[20]="CHROME OS";
			count=0;
			for(int i=0;i<=20;i++)
			{
				int check=strcmp(chrome,a[i].category);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("Category:  %s\n",a[i].category);
					printf("Series:\t%s\n",a[i].series);
					printf("Model:\t%s\n",a[i].model);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else
		{
			printf("Please Enter correct number\n");
			goto lb;
		}
}
void searchByCPUModel(lptp a[])
{
	lb:
	printf("enter CPU model\nuse only small letters\n");
	char mdl1[50];
	int check;
	int check1,count=0;
	fflush(stdin);
	gets(mdl1);
	for(int i=0;i<=19;i++)
	{
		check=strcmp(mdl1,a[i].spec.mdl);
		if(check==0)
		{
			count++;
		printf("Laptop #%d\n",count);	
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("Laptop Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("Series:\t%s\n",a[i].series);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
		}
	}
	if(count==0)
	{
		printf("model not found\n");
	}
	lc:
	printf("if you want to search another model press 1 else press 0\n");
	scanf("%d",&check1);
	if(check1==1)
	{
		goto lb;
	}
	if(check1!=0)
	{
		printf("Please enter valid number");
		goto lc;
	}

}
void searchByCPUGeneration(lptp a[])
{
	lb:
	printf("enter CPU generation\n");
	int gen;
	int check;
	int check1,count=0;
	scanf("%d",&gen);
	for(int i=0;i<=19;i++)
	{
		
		if(a[i].spec.generation==gen)
		{
			count++;
		printf("Laptop #%d\n",count);	
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("Laptop Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("Series:\t%s\n",a[i].series);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
		}
	}
	if(count==0)
	{
		printf("record not found\n");
	}
	lc:
	printf("if you want to search again press 1 else press 0\n");
	scanf("%d",&check1);
	if(check1==1)
	{
		goto lb;
	}
	if(check1!=0)
	{
		printf("Please enter valid number");
		goto lc;
	}
}
void availableModels(lptp a[])
{
	int count=0;
			for(int i=0;i<=19;i++)
			{
				
				if(a[i].status=='A')
				{
					count++;
					printf("Laptop No. %d\n",count);
					printf("Category:  %s\n",a[i].category);
					printf("Series:\t%s\n",a[i].series);
					printf("Model:\t%s\n",a[i].model);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
}
void selectGPUModel(lptp a[])
{
	int num,count;
	lb:
	printf("Select GPU Model\n");
	printf("Press 1 for: NVIDIA GTX 1050TI\n");
	printf("Press 2 for: NVIDIA MX250\n");
	printf("Press 3 for: NVIDIA GTX 1070\n");
	printf("Press 4 for: NVIDIA GTX 1080\n");
	printf("Press 5 for: NVIDIA MX130\n");
	printf("Press 6 for: NVIDIA RTX 2070\n");
	printf("Press 7 for: NVIDIA RTX 2080\n");
	printf("Press 8 for: NVIDIA GTX 950M\n");
	printf("Press 9 for: INTEGRATED GPU\n");
	scanf("%d",&num);
	        if(num==1)
	        {
			char g[20]="NVIDIA GTX 1050TI";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==2)
	        {
			char g[20]="NVIDIA MX250";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==3)
	        {
			char g[20]="NVIDIA GTX 1070";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==4)
	        {
			char g[20]="NVIDIA GTX 1080";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==5)
	        {
			char g[20]="NVIDIA MX130";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==6)
	        {
			char g[20]="NVIDIA RTX 2070";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==7)
	        {
			char g[20]="NVIDIA RTX 2080";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==8)
	        {
			char g[20]="NVIDIA GTX 950M";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
		else if(num==9)
	        {
			char g[20]="INTEGRATED";
			count=0;
			for(int i=0;i<=19;i++)
			{
				int check=strcmp(g,a[i].gpu);
				if(check==0){
					count++;
					printf("Laptop No. %d\n",count);
					printf("GPU:\t%s\n",a[i].gpu);
					printf("Series:\t%s\n",a[i].series);
					printf("Price:\tRs %.2f\n",a[i].price);
					printf("Model:\t%s\n",a[i].model);
					printf("Category:  %s\n",a[i].category);
					printf("CPU Model:  %s\n",a[i].spec.mdl);
					printf("CPU Clock:  %s\n",a[i].spec.clock);
					printf("CPU Generation:  %d\n",a[i].spec.generation);
					printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
					printf("Storage:\t%s\n",a[i].storage);
					printf("Memory:\t%s\n",a[i].memory);
					printf("Screen Info:  %s\n",a[i].screen);
					printf("I/O Ports:  %s\n",a[i].ioport);
					printf("Keyboard Info:  %s\n",a[i].keyboard);
					printf("Communication:  %s\n",a[i].communication);
					printf("Status:\t%c\n",a[i].status);
					printf("Operating System:  %s\n\n\n",a[i].os);
					
				}
			}
		}
	else
		{
			printf("Please Enter correct number\n");
			goto lb;
		}
}
void sorfBySeries(lptp a[])
{
	lptp swap[20];
	for(int k=0;k<=18;k++)
{
	for(int i=0;i<=18;i++)
	{
		if(strcmp(a[i].series,a[i+1].series)==1)
		{
		  swap[i]=a[i];
		  a[i]=a[i+1];
		  a[i+1]=swap[i];	
		}
	}
}
for(int i=0;i<=19;i++)
	{
		printf("Laptop No. %d\n",i+1);
		printf("Series:\t%s\n",a[i].series);
		printf("Price:\tRs %.2f\n",a[i].price);
		printf("Model:\t%s\n",a[i].model);
		printf("Category:  %s\n",a[i].category);
		printf("CPU Model:  %s\n",a[i].spec.mdl);
		printf("CPU Clock:  %s\n",a[i].spec.clock);
		printf("CPU Generation:  %d\n",a[i].spec.generation);
		printf("Release Date:  %d-%d-%d\n",a[i].release.day,a[i].release.month,a[i].release.year);
		printf("GPU:\t%s\n",a[i].gpu);
		printf("Storage:\t%s\n",a[i].storage);
		printf("Memory:\t%s\n",a[i].memory);
		printf("Screen Info:  %s\n",a[i].screen);
		printf("I/O Ports:  %s\n",a[i].ioport);
		printf("Keyboard Info:  %s\n",a[i].keyboard);
		printf("Communication:  %s\n",a[i].communication);
		printf("Status:\t%c\n",a[i].status);
		printf("Operating System:  %s\n\n\n",a[i].os);
	}
}
