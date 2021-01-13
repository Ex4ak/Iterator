#include <iostream>
#include <vector>
  
int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto iter = v.begin();
    while(iter!=v.end())    // ���� �� ������ �� �����
    {
        *iter = (*iter) * (*iter); // �������� ��� ����� � �������
        ++iter;
    }
     
    for(iter = v.begin(); iter!=v.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
     
    return 0;
}
