#VAR1 ""
typedef union
{
    unsigned int VAR2;
    unsigned int VAR3;
} VAR4;
void FUN1()
{
    unsigned int VAR5;
    CWE190_Integer_Overflow__unsigned_int_max_multiply_34_unionType VAR6;
    VAR5 = 0;
    VAR5 = VAR7;
    VAR6.VAR2 = VAR5;
    {
        unsigned int VAR5 = VAR6.VAR3;
        if(VAR5 > 0) 
        {
            unsigned int VAR8 = VAR5 * 2;
            FUN2(VAR8);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}