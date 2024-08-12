#VAR1 ""
#define DEST_SIZE 10
int VAR2 = 1; 
int VAR3 = 0; 
void FUN1()
{
    if(VAR2)
    {
        {
            char VAR4[VAR5];
            char *VAR6;
            VAR6 = gets(VAR4);
            if (VAR6 == NULL)
            {
                FUN2(1);
            }
            VAR4[VAR5-1] = '';
            FUN3(VAR4);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}