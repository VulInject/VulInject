void
FUN1(bus_dma_tag_t VAR1, bus_dmamap_t VAR2, bus_addr_t VAR3,
bus_size_t VAR4, int VAR5)
{
int VAR6;
int VAR7;


if (VAR1->VAR8 & VAR9) {
FUN2();
return;
}

VAR6 = VAR2->VAR10;
VAR7 = 0;

while (VAR4 && VAR6) {
vaddr_t VAR11;
bus_size_t VAR12;

VAR12 = VAR2->VAR13[VAR7].VAR14;
VAR11 = VAR2->VAR13[VAR7].VAR15;

if (VAR3 != 0) {
if (VAR3 >= VAR12) {
VAR3 -= VAR12;
VAR12 = 0;
} else {
VAR11 += VAR3;
VAR12 -= VAR3;
VAR3 = 0;
}
}
if (VAR12 > VAR4)
VAR12 = VAR4;

if (VAR12 != 0) {
FUN3(VAR11, VAR12, VAR5);
VAR4 -= VAR12;
}
VAR7++;
VAR6--;
}

if (VAR4 != 0) {
FUN4("");
}
}