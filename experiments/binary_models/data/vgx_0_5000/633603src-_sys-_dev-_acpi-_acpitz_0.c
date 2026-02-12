int
acpitz_gettempreading(struct acpitz_softc *sc, char *name)
{
int			rv = -1, tmp = -1, i;

for (i = 0; i < ACPITZ_TMP_RETRY; i++) {
tmp = acpitz_getreading(sc, name);
if (tmp == -1)
goto out;
if (KTOC(tmp) >= 0) {
rv = tmp;
break;
} else {
dnprintf(20, "%s: %d invalid reading on %s, "
"debouncing\n", DEVNAME(sc), tmp, name);
}

acpi_sleep(1000, "acpitz");	
}
if (i >= ACPITZ_TMP_RETRY) {
printf("%s: %s: failed to read %s\n", DEVNAME(sc),
sc->sc_devnode->name, name);
goto out;
}
out:
dnprintf(30, "%s: name: %s tmp: %d => %dC, rv: %d\n", DEVNAME(sc),
name, tmp, KTOC(tmp), rv);
return (rv);
}