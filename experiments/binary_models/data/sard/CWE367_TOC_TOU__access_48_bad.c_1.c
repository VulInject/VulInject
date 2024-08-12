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
void FUN1()
{
    if(VAR13==5)
    {
        {
            char VAR14[100] = "";
            int VAR15 = -1;
            if (fgets(VAR14, 100, stdin) == NULL)
            {
                VAR14[0] = '';
            }
            if (strlen(VAR14) > 0)
            {
                VAR14[strlen(VAR14)-1] = ''; 
            }
            if (FUN2(VAR14, VAR16) == -1)
            {
                FUN3(1);
            }
            VAR15  = FUN4(VAR14, VAR17);
            if (VAR15 == -1)
            {
                FUN3(1);
            }
            if (FUN5(VAR15, VAR9, strlen(VAR9)) == -1)
            {
                FUN3(1);
            }
            if (VAR15 != -1)
            {
                FUN6(VAR15);
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