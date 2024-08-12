#VAR1 ""
void FUN1()
{
    if(FUN2())
    {
        {
            VAR2 * VAR3 = (VAR2 *)FUN3(sizeof(VAR2));
            twoIntsStruct VAR4 = *VAR3; 
            FUN4(VAR4.VAR5);
            FUN4(VAR4.VAR6);
        }
    }
    else
    {
        {
            twoIntsStruct VAR4;
            VAR2 * VAR3 = (VAR2 *)FUN3(sizeof(VAR2));
            VAR4.VAR5 = 1;
            VAR4.VAR6 = 2;
            *VAR3 = VAR4; 
            {
                twoIntsStruct VAR4 = *VAR3;
                FUN4(VAR4.VAR5);
                FUN4(VAR4.VAR6);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN5(NULL) );
    FUN1();
    return 0;
}