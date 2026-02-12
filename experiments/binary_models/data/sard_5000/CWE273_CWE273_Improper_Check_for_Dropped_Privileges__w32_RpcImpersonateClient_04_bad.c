void CWE273_Improper_Check_for_Dropped_Privileges__w32_RpcImpersonateClient_04_bad()
{
    if(STATIC_CONST_TRUE)
    {
        RpcImpersonateClient(0);
        /* FLAW: Do not check if RpcImpersonateClient() fails */
        /* We'll leave out most of the implementation since it has nothing to do with the CWE
         * and since the checkers are looking for certain function calls anyway */
    }
}
