#include <stdio.h>
#include <curl/curl.h>

int main() {
  // Initialize the curl library
  curl_global_init(CURL_GLOBAL_ALL);

  // Create a new curl handle
  CURL *handle = curl_easy_init();

  // Set the URL of the website to test the internet speed
  curl_easy_setopt(handle, CURLOPT_URL, "https://www.speedtest.net/");

  // Perform the request
  CURLcode res = curl_easy_perform(handle);

  // Check for any errors
  if (res != CURLE_OK) {
    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
  }

  // Clean up and exit
  curl_easy_cleanup(handle);
  curl_global_cleanup();
  return 0;
}
