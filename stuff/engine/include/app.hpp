#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <iostream>

namespace engine
{
  constexpr uint32_t WIDTH {800};
  constexpr uint32_t HEIGHT {600};

  class App
  {
    public:
      void run();
    private:
      GLFWwindow* window;
      VkInstance instance;

      void initWindow();
      void initVulkan();
      void mainLoop();
      void cleanUp();
      void createInstance();
  };
}