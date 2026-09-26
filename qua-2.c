#include<stdio.h>
int main()
{
    int isParkingAvailable;
    int isMember;
    int isEmergencyVehicle;
    int account;
    int vehicleCode;
    float originalCharge=0;
    float EmergencyVehicle=0;
    float finalCharge=0;
    int validVehince;
    int discountAmount=0;

    printf("Is parking sloats available? (1=Yes,0=No):");
    scanf("%d",&isParkingAvailable);

    printf("Is the driver a registered member? (1=Yes,0=No)");
    scanf("%d",&isMember);

    printf("Is the vehocle an emergency vehicle? (1=Yes,0=No)");
    scanf("%d",&isEmergencyVehicle);

    account=isParkingAvailable & (isMember ||isEmergencyVehicle );
    printf("\nExpected Output:\n");

    if(account)
    {
        printf("Parking Status: Allowed \n");
    }else
    {
        printf("Parking Status: Not Allowed \n");
    }

    printf("Enter Vehicle Code(1-Motorcycle,2-Car,3-Van,4-Bus):");
    scanf("%d",&vehicleCode);

    switch(vehicleCode)
    {
        case 1: printf("V type: Motorcycle\n");
        originalCharge=100.0;
        break;
        case 2: printf("V type: Car\n");
        originalCharge=300.0;
        break;
        case 3: printf("V type: Van\n");
        originalCharge=500.0;
        break;
        case 4: printf("V type: Bus\n");
        originalCharge=800.0;
        break;
        defaulf: printf("Invalid vehicle code. Charge cannot be calculated. ");
    }
    
    if(validVehince)
    {
      if(isMember)
      {
        discountAmount = originalCharge * 0.10;
      }
      else
      {
        discountAmount = 0.0;
      }
      finalCharge = originalCharge - discountAmount;
    
      printf("Original Charge :Rs. %2f\n",originalCharge);
      printf("Discount  :Rs. %2f\n",discountAmount);
      printf("Final Charge  :Rs. %2f\n",finalCharge);
    }
    else
    {
        printf("Parking Status: Not Allowed\n");
    }

    return 0;

}