cmake_minimum_required(VERSION 3.27.7)

project(gamelib)

add_executable(${PROJECT_NAME}
  main.c
  rect.c
  game.c
)

target_link_libraries(${PROJECT_NAME}
  raylib
  pthread
)
