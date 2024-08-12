#VAR1 ""
void FUN1()
{
    if(VAR2)
    {
        {
            VAR3 * VAR4 = (VAR3 *)malloc(sizeof(VAR3));
            if (VAR4 == NULL) {FUN2(-1);}
            twoIntsStruct VAR5 = *VAR4; 
            free(VAR4);
            FUN3(VAR5.VAR6);
            FUN3(VAR5.VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}