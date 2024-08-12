#VAR1 ""
#define STAT VAR2
#define OPEN _open
#define WRITE VAR3
#define O_RDWR VAR4
#define CLOSE VAR5
#VAR1 <VAR6.VAR7>
#define STAT VAR8
#define OPEN open
#define WRITE write
#define CLOSE close
#define VAR9 ""
#define VAR10 ""
#define ACCESS VAR11
#define W_OK 02
#define ACCESS VAR12
static const int VAR13 = 1; 
static const int VAR14 = 0; 
void FUN1()
{
    if(VAR13)
    {
        {
            char VAR15[100] = "";
            int VAR16 = -1;
            if (fgets(VAR15, 100, stdin) == NULL)
            {
                VAR15[0] = '';
            }
            if (strlen(VAR15) > 0)
            {
                VAR15[strlen(VAR15)-1] = ''; 
            }
            if (FUN2(VAR15, VAR17) == -1)
            {
                FUN3(1);
            }
            VAR16  = FUN4(VAR15, VAR18);
            if (VAR16 == -1)
            {
                FUN3(1);
            }
            if (FUN5(VAR16, VAR9, strlen(VAR9)) == -1)
            {
                FUN3(1);
            }
            if (VAR16 != -1)
            {
                FUN6(VAR16);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN1();
    return 0;
}