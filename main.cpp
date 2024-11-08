#include <iostream>
#include <string>

class Entity
{
    std::string m_Name;
    int m_Score;
    public:
    Entity()
        : m_Name("Unknown"),m_Score(0)
    {
        m_Name = "Unknown";
    }
    Entity(std::string name) : m_Name(name)
    {

    }
    const std::string& Getname() const { return m_Name; }
};


int main()
{
    Entity e0;
    std::cout << e0.Getname() << std::endl;
    Entity e1("Tao");
    std::cout << e1.Getname() << std::endl;

    return 0;
}
