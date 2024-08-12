void FUN1(void) {

VAR1* VAR2 = (VAR1*)FUN2(VAR3 * VAR4 * sizeof(VAR1) * VAR5, 64);
VAR1* VAR6 = (VAR1*)FUN2(VAR7 * VAR8 * sizeof(VAR1) * VAR5, 64);
unsigned int VAR9;
VAR1* VAR2 = (VAR1*)FUN2(VAR3 * VAR4 * sizeof(VAR1), 64);
VAR1* VAR6 = (VAR1*)FUN2(VAR7 * VAR8 * sizeof(VAR1), 64);
VAR1* VAR10 = (VAR1*)FUN2(VAR11 * VAR8 * sizeof(VAR1), 64);
VAR1* VAR12 = (VAR1*)FUN2(VAR11 * VAR8 * sizeof(VAR1), 64);
REALTYPE VAR13 = 0.0;

unsigned int VAR14;
unsigned int VAR15;
unsigned int VAR16;
unsigned int VAR17;
unsigned int VAR18;
unsigned int VAR19;

struct timeval VAR20, VAR21;
double VAR22;

for ( VAR9 = 0; VAR9 < VAR5; VAR9++ ) {
VAR1* VAR23 = VAR2 + (VAR9 * VAR4 * VAR3);
VAR1* VAR23 = VAR2;

for ( VAR14 = 0; VAR14 < VAR3; VAR14++) {
for ( VAR15 = 0; VAR15 < VAR4; VAR15++) {
VAR23[(VAR15 * VAR3) + VAR14] = (VAR1)FUN3();
VAR23[(VAR15 * VAR3) + VAR14] = (VAR1)(VAR14 + (VAR15 * VAR24));
}
}
}

for ( VAR9 = 0; VAR9 < VAR5; VAR9++ ) {
VAR1* VAR25 = VAR6 + (VAR9 * VAR8 * VAR7);
{
VAR1* VAR25 = VAR6;

for ( VAR14 = 0; VAR14 < VAR7; VAR14++ ) {
for ( VAR15 = 0; VAR15 < VAR8; VAR15++ ) {
VAR25[(VAR15 * VAR7) + VAR14] = (VAR1)FUN3();
VAR25[(VAR15 * VAR7) + VAR14] = (VAR1)(VAR14 + (VAR15 * VAR4));
}
}
}
}


for ( VAR14 = 0; VAR14 < VAR11; VAR14++) {
for ( VAR15 = 0; VAR15 < VAR8; VAR15++) {
VAR10[(VAR15 * VAR11) + VAR14] = (VAR1)0.0;
VAR12[(VAR15 * VAR11) + VAR14] = (VAR1)0.0;
}
}

{
char VAR26 = '';
int VAR27 = VAR24;
int VAR28 = VAR8;
int VAR29 = VAR4;
int VAR30 = VAR3;
int VAR31 = VAR7;
int VAR32 = VAR11;
if (sizeof(VAR1) == sizeof(double)) {
double VAR33 = 1.0;
FUN4(&VAR26, &VAR26, &VAR27, &VAR28, &VAR29, &VAR33, (double*)VAR2, &VAR30, (double*)VAR6, &VAR31, &VAR33, (double*)VAR12, &VAR32);
} else {
float VAR33 = 1.0f;
FUN5(&VAR26, &VAR26, &VAR27, &VAR28, &VAR29, &VAR33, (float*)VAR2, &VAR30, (float*)VAR6, &VAR31, &VAR33, (float*)VAR12, &VAR32);
}
}


for ( VAR14 = 0; VAR14 < VAR11; VAR14++) {
for ( VAR15 = 0; VAR15 < VAR8; VAR15++) {
VAR10[(VAR15 * VAR11) + VAR14] = (VAR1)0.0;
VAR12[(VAR15 * VAR11) + VAR14] = (VAR1)0.0;
}
}


FUN6(&VAR20, NULL);
for ( VAR16 = 0; VAR16 < VAR34; VAR16++ ) {
VAR1* VAR23 = VAR2 - (VAR4 * VAR3);
VAR1* VAR25 = VAR6 - (VAR8 * VAR7);
for ( VAR9 = 0; VAR9 < VAR5; VAR9++ ) {
VAR23 += (VAR4 * VAR3);
VAR25 += (VAR8 * VAR7);
VAR1* VAR23 = VAR2;
VAR1* VAR25 = VAR6;
for ( VAR18 = 0; VAR18 < VAR8; VAR18++ ) {
for ( VAR19 = 0; VAR19 < VAR4; VAR19++ ) {
for ( VAR17 = 0; VAR17 < VAR24; VAR17++ ) {
VAR12[(VAR18 * VAR11) + VAR17] += VAR23[(VAR19 * VAR3) + VAR17] * VAR25[(VAR18 * VAR7) + VAR19];
}
}
}
}
}
char VAR26 = '';
int VAR27 = VAR24;
int VAR28 = VAR8;
int VAR29 = VAR4;
int VAR30 = VAR3;
int VAR31 = VAR7;
int VAR32 = VAR11;
if (sizeof(VAR1) == sizeof(double)) {
double VAR33 = 1.0;
for ( VAR16 = 0; VAR16 < VAR34; VAR16++ ) {
VAR1* VAR23 = VAR2 - (VAR4 * VAR3);
VAR1* VAR25 = VAR6 - (VAR8 * VAR7);
for ( VAR9 = 0; VAR9 < VAR5; VAR9++ ) {
VAR23 += (VAR4 * VAR3);
VAR25 += (VAR8 * VAR7);
VAR1* VAR23 = VAR2;
VAR1* VAR25 = VAR6;
FUN4(&VAR26, &VAR26, &VAR27, &VAR28, &VAR29, &VAR33, (double*)VAR23, &VAR30, (double*)VAR25, &VAR31, &VAR33, (double*)VAR12, &VAR32);
}
}
} else {
float VAR33 = 1.0f;
for ( VAR16 = 0; VAR16 < VAR34; VAR16++ ) {
VAR1* VAR23 = VAR2 - (VAR4 * VAR3);
VAR1* VAR25 = VAR6 - (VAR8 * VAR7);
for ( VAR9 = 0; VAR9 < VAR5; VAR9++ ) {
VAR23 += (VAR4 * VAR3);
VAR25 += (VAR8 * VAR7);
VAR1* VAR23 = VAR2;
VAR1* VAR25 = VAR6;
FUN5(&VAR26, &VAR26, &VAR27, &VAR28, &VAR29, &VAR33, (float*)VAR23, &VAR30, (float*)VAR25, &VAR31, &VAR33, (float*)VAR12, &VAR32);
}
}
}
FUN6(&VAR21, NULL);

VAR22 = FUN7(VAR20, VAR21);
FUN8("", VAR22);
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0 * ((double)VAR5)) / (VAR22 * 1.0e9));
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0) / (VAR22 * 1.0e9));
FUN8("", VAR22);
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0 * ((double)VAR5)) / (VAR22 * 1.0e9));
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0) / (VAR22 * 1.0e9));

FUN6(&VAR20, NULL);
libxsmm_timer_tickint VAR35 = FUN9();

for ( VAR16 = 0; VAR16 < VAR34; VAR16++ ) {
VAR1* VAR23 = VAR2 - (VAR4 * VAR3);
VAR1* VAR25 = VAR6 - (VAR8 * VAR7);
for ( VAR9 = 0; VAR9 < VAR5; VAR9++ ) {
VAR23 += (VAR4 * VAR3);
VAR25 += (VAR8 * VAR7);
VAR1* VAR23 = VAR2;
VAR1* VAR25 = VAR6;
FUN10(VAR23, VAR25, VAR10, VAR23 + (VAR4 * VAR3), VAR25 + (VAR8 * VAR7), NULL);
FUN10(VAR23, VAR25, VAR10);
}
}
libxsmm_timer_tickint VAR36 = FUN9();
FUN6(&VAR21, NULL);
VAR22 = FUN7(VAR20, VAR21);

FUN8("", VAR22);
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0 * ((double)VAR5)) / (VAR22 * 1.0e9));
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0) / (VAR22 * 1.0e9));
FUN8("", ((double)((double)VAR34 * (double)VAR24 * (double)VAR8 * (double)VAR4) * 2.0) / ((double)(VAR36 - VAR35)));


for ( VAR14 = 0; VAR14 < VAR24; VAR14++) {
for ( VAR15 = 0; VAR15 < VAR8; VAR15++) {
FUN8("", VAR14+1, VAR15+1, VAR12[(VAR15*VAR24)+VAR14], VAR10[(VAR15*VAR24)+VAR14]);
if (VAR13 < FUN11( VAR12[(VAR15 * VAR11) + VAR14] - VAR10[(VAR15 * VAR11) + VAR14]))
VAR13 = FUN11( VAR12[(VAR15 * VAR11) + VAR14] - VAR10[(VAR15 * VAR11) + VAR14]);
}
}

FUN8("", VAR13);


FUN12(VAR2);
FUN12(VAR6);
FUN12(VAR10);
FUN12(VAR12);
}