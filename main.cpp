#include <mysql.h>
#include <iostream>

using namespace std;

int main() {
    MYSQL *conn;
    conn = mysql_init(0);

    conn = mysql_real_connect(conn, "localhost", "root", "1234", "universidad", 3306, NULL, 0);

    if (conn) {
        cout << "Conexion exitosa 😎" << endl;
    } else {
        cout << "Error: " << mysql_error(conn) << endl;
    }

    mysql_close(conn);
    return 0;
}
