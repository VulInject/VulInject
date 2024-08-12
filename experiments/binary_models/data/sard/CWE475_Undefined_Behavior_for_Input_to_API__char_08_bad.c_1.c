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
            char VAR4[100] = "";
            char * VAR5 = VAR4;
            strcpy(VAR5, "");
            memcpy(VAR5 + 6, VAR5 + 4, 10*sizeof(char));
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