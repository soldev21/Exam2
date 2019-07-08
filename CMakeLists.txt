cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp model/User.cpp model/Category.cpp util/Utils.cpp model/AuthResponse.cpp collections/Map.h collections/Map.cpp util/sha256.cpp util/sha256.h model/Question.cpp model/Exam.cpp model/ExamSession.cpp  repository/StandardRepository.cpp repository/UserRepository.cpp repository/CategoryRepository.cpp dao/UserDao.cpp dao/CategoryDao.cpp dao/ExamSessionDao.cpp repository/ExamSessionRespository.cpp auth/Authentication.cpp repository/Repository.h)