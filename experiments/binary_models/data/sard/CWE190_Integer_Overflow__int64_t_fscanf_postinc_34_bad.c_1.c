#VAR1 <VAR2.VAR3>
#VAR1 ""
typedef union
{
    int64_t VAR4;
    int64_t VAR5;
} VAR6;
void FUN1()
{
    int64_t VAR7;
    CWE190_Integer_Overflow__int64_t_fscanf_postinc_34_unionType VAR8;
    VAR7 = 0LL;
    fscanf (stdin, "" VAR9, &VAR7);
    VAR8.VAR4 = VAR7;
    {
        int64_t VAR7 = VAR8.VAR5;
        {
            VAR7++;
            int64_t VAR10 = VAR7;
            FUN2(VAR10);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}