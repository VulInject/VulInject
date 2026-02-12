int mbedtls_mpi_mod_write(const mbedtls_mpi_mod_residue *r,
const mbedtls_mpi_mod_modulus *N,
unsigned char *buf,
size_t buflen,
mbedtls_mpi_mod_ext_rep ext_rep)
{
int ret = MBEDTLS_ERR_MPI_BAD_INPUT_DATA;


if (r->limbs == 0 || N->limbs == 0) {
goto cleanup;
}
if (r->limbs != N->limbs) {
goto cleanup;
}

if (N->int_rep == MBEDTLS_MPI_MOD_REP_MONTGOMERY) {
ret = mbedtls_mpi_mod_raw_from_mont_rep(r->p, N);
if (ret != 0) {
goto cleanup;
}
}

ret = mbedtls_mpi_mod_raw_write(r->p, N, buf, buflen, ext_rep);

if (N->int_rep == MBEDTLS_MPI_MOD_REP_MONTGOMERY) {

int conv_ret = mbedtls_mpi_mod_raw_to_mont_rep(r->p, N);
if (ret == 0) {
ret = conv_ret;
}
}

cleanup:

return ret;
}