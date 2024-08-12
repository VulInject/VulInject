#VAR1 ""
typedef union
{
    int VAR2;
    int VAR3;
} VAR4;
void FUN1()
{
    int VAR5;
    CWE400_Resource_Exhaustion__fscanf_for_loop_34_unionType VAR6;
    VAR5 = -1;
    fscanf(stdin, "", &VAR5);
    VAR6.VAR2 = VAR5;
    {
        int VAR5 = VAR6.VAR3;
        {
            size_t VAR7 = 0;
            for (VAR7 = 0; VAR7 < (VAR8)VAR5; VAR7++)
            {
            }
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}