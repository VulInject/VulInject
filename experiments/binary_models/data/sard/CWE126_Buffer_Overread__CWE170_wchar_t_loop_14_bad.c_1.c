#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(VAR4==5)
    {
        {
            wchar_t VAR5[150], VAR6[100];
            int VAR7;
            wmemset(VAR5, VAR8'', 149);
            VAR5[149] = VAR8'';
            for(VAR7=0; VAR7 < 99; VAR7++)
            {
                VAR6[VAR7] = VAR5[VAR7];
            }
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}