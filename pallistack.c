//Accept String and check Palindrome or not using stack...
#define MAX 10
struct stack
{
  char a[MAX];
  int top;
}*s;

void init()
{
  s->top=-1;
}
int isempty()
{
  if(s->top==-1)
       return 1;
  else
      return 0;
}
int isfull()
{
  if(s->top==MAX-1)
       return 1;
  else
      return 0;
}
void push(char c)
{
   if(isfull())
     printf("Stack is full");
   else
   {
      s->top++;
      s->a[s->top]=c;
   }
}
char pop()
{
  char val;
  if(isempty())
    printf("Stack is empty");
  else
  {
     val=s->a[s->top];
     s->top--;
    return val;
  }
}
int main()
{
   char s1[20];
   int i;
   clrscr();
   printf("Enter String:");
   gets(s1);
   init();
   for(i=0;s1[i]!='\0';i++)
   {
     push(s1[i]);
   }
   for(i=0;s1[i]!='\0';i++)
   {
     if(s1[i]!=pop())
     {
        break;
     }
   }
   if(isempty())
     printf("String is palindrome");
   else
    printf("String is not palindrome");
}