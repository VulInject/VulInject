#VAR1 ""
void FUN1()
{
    VAR2 * VAR3;
    VAR2 * *VAR4 = &VAR3;
    VAR2 * *VAR5 = &VAR3;
    int64_t VAR6[50];
    int64_t VAR7[100];
    {
        VAR2 * VAR3 = *VAR4;
        VAR3 = VAR6;
        *VAR4 = VAR3;
    }
    {
        VAR2 * VAR3 = *VAR5;
        {
            int64_t VAR8[100] = {0}; 
            memcpy(VAR3, VAR8, 100*sizeof(VAR2));
            FUN2(VAR3[0]);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}