#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    if(FUN2())
    {
        fscanf (stdin, "", &VAR4);
    }
    else
    {
        VAR4 = 2.0F;
    }
    if(FUN2())
    {
        {
            int VAR5 = (int)(100.0 / VAR4);
            FUN3(VAR5);
        }
    }
    else
    {
        if(FUN4(VAR4) > 0.000001)
        {
            int VAR5 = (int)(100.0 / VAR4);
            FUN3(VAR5);
        }
        else
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}