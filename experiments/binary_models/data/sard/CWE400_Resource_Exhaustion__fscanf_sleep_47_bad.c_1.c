#VAR1 ""
#VAR1 <VAR2.VAR3>
#define SLEEP VAR4
#VAR1 <VAR5.VAR3>
#define SLEEP VAR6
void FUN1()
{
    int VAR7;
    VAR7 = -1;
    if(FUN2())
    {
        fscanf(stdin, "", &VAR7);
    }
    else
    {
        VAR7 = 20;
    }
    if(FUN2())
    {
        FUN3(VAR7);
    }
    else
    {
        if (VAR7 > 0 && VAR7 <= 2000)
        {
            FUN3(VAR7);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}