#VAR1 ""
#VAR1 <VAR2.VAR3>
#VAR1 <VAR4.VAR3>
#define BUFFER_SIZE 1024
void FUN1()
{
    if(FUN2())
    {
        {
            HANDLE VAR5 = NULL;
            VAR5 = FUN3(NULL, VAR6, NULL);
            if (VAR5 == VAR7)
            {
                FUN4(1);
            }
            FUN5(VAR5);
        }
    }
    else
    {
        {
            HANDLE VAR5 = NULL;
            VAR5 = FUN3(NULL, VAR6, NULL);
            if (VAR5 == NULL)
            {
                FUN4(1);
            }
            FUN5(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}