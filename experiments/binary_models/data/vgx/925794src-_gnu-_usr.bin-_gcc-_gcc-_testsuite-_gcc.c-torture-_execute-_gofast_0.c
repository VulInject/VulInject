double FUN1 (double VAR1) { return -VAR1; }

double FUN2 (float VAR2) { return VAR2; }
float FUN3 (double VAR3) { return VAR3; }

int FUN4 (float VAR1, float VAR4) { return VAR1 == VAR4; }
int FUN5 (float VAR1, float VAR4) { return VAR1 != VAR4; }
int FUN6 (float VAR1, float VAR4) { return VAR1 > VAR4; }
int FUN7 (float VAR1, float VAR4) { return VAR1 >= VAR4; }
int FUN8 (float VAR1, float VAR4) { return VAR1 < VAR4; }
int FUN9 (float VAR1, float VAR4) { return VAR1 <= VAR4; }

int FUN10 (double VAR1, double VAR4) { return VAR1 == VAR4; }
int FUN11 (double VAR1, double VAR4) { return VAR1 != VAR4; }
int FUN12 (double VAR1, double VAR4) { return VAR1 > VAR4; }
int FUN13 (double VAR1, double VAR4) { return VAR1 >= VAR4; }
int FUN14 (double VAR1, double VAR4) { return VAR1 < VAR4; }
int FUN15 (double VAR1, double VAR4) { return VAR1 <= VAR4; }

float FUN16 (int VAR5) { return VAR5; }
double FUN17 (int VAR5) { return VAR5; }
int FUN18 (float VAR2) { return VAR2; }
int FUN19 (double VAR3) { return VAR3; }
unsigned int FUN20 (float VAR2) { return VAR2; }
unsigned int FUN21 (double VAR3) { return VAR3; }

int VAR6 = 0;

int
FUN22 (char *VAR7)
{
VAR6++;
fprintf (VAR8, "", VAR7);
}