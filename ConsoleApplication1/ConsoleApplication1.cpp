#include <iostream>
#include <string>
#include <ctime>
using  namespace std;
struct matrix{
int matr[3][3];
  void multi(int a[3][3]) {
    int result[3][3]; // Временная матрица для хранения результата

    // Вычисляем матричное произведение и сохраняем результат во временную матрицу
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        result[i][j] = 0;
        for (int k = 0; k < 3; k++) {
          result[i][j] += matr[i][k] * a[k][j];
        }
      }
    }

    // Копируем результат обратно в матрицу matr
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        matr[i][j] = result[i][j];
      }
    }
  }


  void random() {
    srand(time(NULL));
    for(int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        matr[i][j] = rand();
      }
    }
  }
void minus(int a){
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      matr[i][j]=matr[i][j]-a;
    }
  }
}
void pluse(int a[3][3]){
  for (int i = 0; i<3; i++){
    for(int j = 0; j<3 ; j++){
      matr[i][j]=matr[i][j]+a[i][j];
    }
    cout << "\n";
  }
}
void print(){
  for (int i = 0; i<3; i++){
    for(int j = 0; j<3 ; j++){
      cout << matr[i][j] << " ";
    }
    cout << "\n";
  }

}
};
int main() {
  srand(time(NULL));
  matrix mass;
  int a[3][3];
    for(int i = 0; i<3; i++){
      for(int j = 0; j<3; j++){
        cin >> mass.matr[i][j];
      }
    }
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      cin >> a[i][j];
    }
  }

  //mass.pluse(a);
 //mass.random();
  mass.multi(a);
  mass.print();
}