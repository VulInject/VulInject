#VAR1 ""
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
            VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
            if (VAR3 == NULL) {FUN4(-1);}
            twoIntsStruct VAR4 = *VAR3; 
            free(VAR3);
            FUN5(VAR4.VAR5);
            FUN5(VAR4.VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN3();
    return 0;
}