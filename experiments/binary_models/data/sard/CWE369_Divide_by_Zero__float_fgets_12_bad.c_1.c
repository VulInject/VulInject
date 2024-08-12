#VAR1 ""
#VAR1 <VAR2.VAR3>
#define CHAR_ARRAY_SIZE 20
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    if(FUN2())
    {
        {
            char VAR5[VAR6];
            if (fgets(VAR5, VAR6, stdin) != NULL)
            {
                VAR4 = (float)FUN3(VAR5);
            }
            else
            {
            }
        }
    }
    else
    {
        VAR4 = 2.0F;
    }
    if(FUN2())
    {
        {
            int VAR7 = (int)(100.0 / VAR4);
            FUN4(VAR7);
        }
    }
    else
    {
        if(FUN5(VAR4) > 0.000001)
        {
            int VAR7 = (int)(100.0 / VAR4);
            FUN4(VAR7);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN1();
    return 0;
}