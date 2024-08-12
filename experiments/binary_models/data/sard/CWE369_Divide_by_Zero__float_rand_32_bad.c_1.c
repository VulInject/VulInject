#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    float VAR4;
    float *VAR5 = &VAR4;
    float *VAR6 = &VAR4;
    VAR4 = 0.0F;
    {
        float VAR4 = *VAR5;
        VAR4 = (float)FUN2();
        *VAR5 = VAR4;
    }
    {
        float VAR4 = *VAR6;
        {
            int VAR7 = (int)(100.0 / VAR4);
            FUN3(VAR7);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}