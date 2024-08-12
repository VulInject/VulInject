#VAR1 ""
void FUN1()
{
    if(VAR2)
    {
        {
            VAR3 * VAR4 = (VAR3 *)malloc(sizeof(VAR3));
            if (VAR4 == NULL) {FUN2(-1);}
            int64_t VAR5 = *VAR4; 
            free(VAR4);
            FUN3(VAR5);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}