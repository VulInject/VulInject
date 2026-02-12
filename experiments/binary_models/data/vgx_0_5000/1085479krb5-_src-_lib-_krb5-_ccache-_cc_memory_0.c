krb5_error_code KRB5_CALLCONV
krb5_mcc_next_cred(krb5_context context, krb5_ccache id,
krb5_cc_cursor *cursor, krb5_creds *creds)
{
struct mcc_cursor *mcursor;
krb5_error_code retval;
krb5_mcc_data *d = id->data;

memset(creds, 0, sizeof(krb5_creds));
mcursor = *cursor;
if (mcursor->next_link == NULL)
return KRB5_CC_END;


k5_cc_mutex_lock(context, &d->lock);
if (mcursor->generation != d->generation) {
retval = KRB5_CC_END;
goto done;
}


while (mcursor->next_link != NULL && mcursor->next_link->creds == NULL)
mcursor->next_link = mcursor->next_link->next;
if (mcursor->next_link == NULL) {
retval = KRB5_CC_END;
goto done;
}

retval = k5_copy_creds_contents(context, mcursor->next_link->creds, creds);
if (retval == 0)
mcursor->next_link = mcursor->next_link->next;

done:
k5_cc_mutex_unlock(context, &d->lock);
return retval;
}