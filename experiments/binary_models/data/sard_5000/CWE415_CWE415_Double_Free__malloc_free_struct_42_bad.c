void CWE415_Double_Free__malloc_free_struct_42_bad()
{
    twoIntsStruct * data;
    /* Initialize data */
    data = NULL;
    data = badSource(data);
    /* POTENTIAL FLAW: Possibly freeing memory twice */
    free(data);
}
