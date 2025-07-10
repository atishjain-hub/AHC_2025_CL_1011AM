# include <stdio.h>
int main()
{
 printf("\nprogram execution begins from main....");
  void address(void); //function declaration or func prototype

  address();
  printf("\ncontrol comes back to main function...");
  printf("\nProgram logic....");
  address();
  address();

    return 0;
}


//func definition
void address(void)
{
    printf("\ncontrol enters into address function...");
    printf("\nAtish Jain");
    printf("\nDanavaipeth, Beside UCO Bank");
    printf("\nRajahmundry - 533103");
    printf("\n------------------------------------------");

}
