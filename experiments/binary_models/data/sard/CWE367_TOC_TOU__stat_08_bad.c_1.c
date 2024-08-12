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
int FUN1()
{
    return 1;
}
int FUN2()
{
    return 0;
}
void FUN3()
{
    if(FUN1())
    {
        {
            char VAR11[100] = "";
            struct STAT VAR12;
            int VAR13 = -1;
            if (fgets(VAR11, 100, stdin) == NULL)
            {
                VAR11[0] = '';
            }
            if (strlen(VAR11) > 0)
            {
                VAR11[strlen(VAR11)-1] = ''; 
            }
            if (FUN4(VAR11, &VAR12) == -1)
            {
                FUN5(1);
            }
            VAR13  = FUN6(VAR11, VAR14);
            if (VAR13 == -1)
            {
                FUN5(1);
            }
            if (FUN7(VAR13, VAR9, strlen(VAR9)) == -1)
            {
                FUN5(1);
            }
            if (VAR13 != -1)
            {
                FUN8(VAR13);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN9(NULL) );
    FUN3();
    return 0;
}