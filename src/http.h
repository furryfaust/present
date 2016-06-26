#pragma once

#ifndef HTTPUTILS
#define HTTPUTILS

struct Header {
    struct Header *next;
    char *name;
    char *value;
};

struct HttpRequest {
    struct Header *headers; 
    int headers_count;
    char *raw, *method, *path, *version;
};

void parse_http_req(struct HttpRequest *req, char *buffer);
#endif