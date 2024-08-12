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
    if(FUN1())
    {
        {
            size_t VAR4 = 0;
            char VAR5[100];
            VAR5[0] = '';
            VAR4 = FUN4((char *)&VAR5, VAR6"", 100);
            FUN5(VAR4);
            FUN6(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN7(NULL) );
    FUN3();
    return 0;
}