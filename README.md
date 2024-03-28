<!-- <h1 align="center">HTTP Server in C</h1> -->

# HTTP Server in C

HTTP is the protocol that powers the web. The [challenge](https://app.codecrafters.io/courses/http-server/introduction) was to build a HTTP server that's capable of handling simple GET/POST requests, serving files and handling multiple concurrent connections.

## Features

-   Parses command-line arguments for the directory to serve files from.
-   Handles GET requests for files in the specified directory.
-   Handles POST requests to create new files in the specified directory.
-   Responds with the appropriate HTTP status code (200 OK, 404 Not Found, etc.).
-   Can echo back the User-Agent header from the request.

## Usage

To get started, first you will need to make the script `start.sh` executable. To do this, run the following command:

```sh
chmod +x start.sh
```

Then, you can start the server by running the following command:

```sh
./start.sh
```