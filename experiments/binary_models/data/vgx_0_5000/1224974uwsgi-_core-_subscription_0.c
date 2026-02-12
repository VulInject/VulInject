int uwsgi_subscription_sign_check(struct uwsgi_subscribe_slot *slot, struct uwsgi_subscribe_req *usr) {
if (subscription_is_safe(usr)) return 1;

if (usr->sign_len == 0 || usr->base_len == 0)
return 0;

if (!slot->sign_ctx) {
if (!subscription_new_sign_ctx(slot, usr)) return 0;
}

if (EVP_VerifyInit_ex(slot->sign_ctx, uwsgi.subscriptions_sign_check_md, NULL) == 0) {
ERR_print_errors_fp(stderr);
return 0;
}

if (EVP_VerifyUpdate(slot->sign_ctx, usr->base, usr->base_len) == 0) {
ERR_print_errors_fp(stderr);
return 0;
}

if (EVP_VerifyFinal(slot->sign_ctx, (unsigned char *) usr->sign, usr->sign_len, slot->sign_public_key) != 1) {
ERR_print_errors_fp(stderr);
return 0;
}


return 1;
}