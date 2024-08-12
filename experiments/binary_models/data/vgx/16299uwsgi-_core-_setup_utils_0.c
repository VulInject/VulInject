void FUN1() {

int VAR1;
union uwsgi_sockaddr VAR2;
union uwsgi_sockaddr_ptr VAR3;

struct VAR4 *VAR5 = VAR6.VAR7;
while (VAR5) {

if (VAR5->VAR8[0] != 0 && !VAR5->VAR9) {
for (VAR1 = 3; VAR1 < (int) VAR6.VAR10; VAR1++) {
FUN2(VAR5, VAR1);
}
}
VAR5 = VAR5->VAR11;
}


for (VAR1 = 3; VAR1 < (int) VAR6.VAR10; VAR1++) {
int VAR12 = 1;

if (FUN3(VAR1)) continue;

if (VAR6.VAR13) {
if (VAR1 == VAR6.VAR14)
continue;
if (VAR1 == VAR6.VAR15)
continue;
}

if (VAR6.VAR16->VAR17[0] > -1) {
if (VAR1 == VAR6.VAR16->VAR17[0])
continue;
}

if (VAR6.VAR16->VAR17[1] > -1) {
if (VAR1 == VAR6.VAR16->VAR17[1])
continue;
}

if (VAR6.VAR16->VAR18[0] > -1) {
if (VAR1 == VAR6.VAR16->VAR18[0])
continue;
}

if (VAR6.VAR16->VAR18[1] > -1) {
if (VAR1 == VAR6.VAR16->VAR18[1])
continue;
}

if (VAR6.VAR19 > -1) {
if (VAR1 == VAR6.VAR19)
continue;
}

struct VAR20 *VAR21 = VAR6.VAR22;
int VAR23 = 0;
while (VAR21) {
if (VAR21->VAR24 == VAR1) {
VAR23 = 1;
break;
}
VAR21 = VAR21->VAR11;
}
if (VAR23)
continue;


int VAR25;
VAR23 = 0;
for (VAR25 = 0; VAR25 < VAR26->VAR27; VAR25++) {
if (VAR26->VAR28[VAR25].VAR29[0] == VAR1) {
VAR23 = 1;
break;
}
if (VAR26->VAR28[VAR25].VAR29[1] == VAR1) {
VAR23 = 1;
break;
}
}

if (VAR23)
continue;


socklen_t VAR30 = sizeof(struct VAR31);
VAR3.VAR32 = (struct VAR33 *) &VAR2;
if (!FUN4(VAR1, VAR3.VAR32, &VAR30)) {
VAR5 = VAR6.VAR7;
while (VAR5) {
if (VAR5->VAR24 == VAR1 && VAR5->VAR9) {
VAR12 = 0;
break;
}
VAR5 = VAR5->VAR11;
}

if (VAR12) {
VAR5 = VAR6.VAR34;
while (VAR5) {
if (VAR5->VAR24 == VAR1 && VAR5->VAR9) {
VAR12 = 0;
break;
}
VAR5 = VAR5->VAR11;
}
}
}

if (VAR12) {
close(VAR1);
}
}

}