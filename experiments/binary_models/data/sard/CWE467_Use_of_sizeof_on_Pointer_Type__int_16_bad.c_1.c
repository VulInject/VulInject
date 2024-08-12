#VAR1 ""
void FUN1()
{
    while(1)
    {
        {
            int * VAR2 = NULL;
            VAR2 = (int *)malloc(sizeof(VAR2));
            if (VAR2 == NULL) {FUN2(-1);}
            VAR3 = 5;
            FUN3(VAR3);
            free(VAR2);
        }
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}