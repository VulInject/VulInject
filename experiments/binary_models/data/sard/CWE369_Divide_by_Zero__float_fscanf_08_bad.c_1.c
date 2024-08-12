#VAR1 ""
#VAR1 <VAR2.VAR3>
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
    float VAR4;
    VAR4 = 0.0F;
    if(FUN1())
    {
        fscanf (stdin, "", &VAR4);
    }
    if(FUN1())
    {
        {
            int VAR5 = (int)(100.0 / VAR4);
            FUN4(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN3();
    return 0;
}