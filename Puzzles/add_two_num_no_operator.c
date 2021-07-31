int add(int x, int y)
{
return printf("%*c%*c", x, ' ', y, ' ');
}

int main()
{
printf("Sum = %d", add(3, 4));
return 0;
}
1)%*c means print a character *number of times hence here x is the number of times it'll print ' ' (space)same for. The next variable y which asks the printf to print space 4 times hence printf prints 7 spaces and returns the total number of characters printed .
If u don't understand comment 
thank you
//https://qr.ae/pGwDhe
