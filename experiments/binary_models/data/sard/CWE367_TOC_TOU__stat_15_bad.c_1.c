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
void FUN1()
{
    switch(6)
    {
    case 6:
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
        if (FUN2(VAR11, &VAR12) == -1)
        {
            FUN3(1);
        }
        VAR13  = FUN4(VAR11, VAR14);
        if (VAR13 == -1)
        {
            FUN3(1);
        }
        if (FUN5(VAR13, VAR9, strlen(VAR9)) == -1)
        {
            FUN3(1);
        }
        if (VAR13 != -1)
        {
            FUN6(VAR13);
        }
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN1();
    return 0;
}