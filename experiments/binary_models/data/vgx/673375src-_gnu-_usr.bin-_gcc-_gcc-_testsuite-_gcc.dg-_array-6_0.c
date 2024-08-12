struct VAR1 { int VAR2; char VAR3[]; };

struct str VAR4 = { 2, "" };

void FUN1()
{
static struct str VAR5 = { 2, "" };
struct str VAR6 = { 2, "" }; 
struct str VAR7 = (struct VAR1) { 2, "" }; 
struct str VAR8 = (struct VAR1) { VAR7.VAR2, "" }; 
}