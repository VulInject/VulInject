#VAR1 ""
#VAR1 <VAR2.VAR3>
static const int VAR4 = 1; 
static const int VAR5 = 0; 
void FUN1()
{
    if(VAR4)
    {
        {
            char * VAR6 = (char *)malloc(100*sizeof(char));
            if (VAR6 == NULL) {FUN2(-1);}
            strcpy(VAR6, "");
            FUN3(VAR6);
            VAR6 = (char *)realloc(VAR6, (130000)*sizeof(char));
            if (VAR6 != NULL)
            {
                strcpy(VAR6, "");
                FUN3(VAR6);
                free(VAR6);
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}