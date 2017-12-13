////CATCH_UNIT_TESTS
//#define CATCH_CONFIG_MAIN  
//#include "catch.hpp"
//#include "BST.h"
//#include <sstream>
//BST test;
//BST test2;
//BST test3;
//TEST_CASE("Test: Insert_Right Heavy")
//{
//	test.insert(5);
//	test.insert(15);
//	test.insert(7);
//	test.insert(9);
//	test.insert(30);
//	test.insert(17);
//	test.insert(8);
//	test.insert(6);
//	test.insert(20);
//	test.insert(10);
//	REQUIRE(test.getRoot()->num == 5);
//	REQUIRE(test.getRoot()->right->num == 15);
//	REQUIRE(test.getRoot()->right->right->num == 30);
//	REQUIRE(test.getRoot()->right->right->left->num == 17);
//	REQUIRE(test.getRoot()->right->right->left->right->num == 20);
//	REQUIRE(test.getRoot()->right->left->num == 7);
//	REQUIRE(test.getRoot()->right->left->left->num == 6);
//	REQUIRE(test.getRoot()->right->left->right->num == 9);
//	REQUIRE(test.getRoot()->right->left->right->right->num == 10);
//	REQUIRE(test.getRoot()->right->left->right->left->num == 8);
//}
//
//TEST_CASE("Test: InOrder_RightHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("5 6 7 8 9 10 15 17 20 30 ");
//	test.printInOrder(out, test.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test: PreOrder_RightHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("5 15 7 6 9 8 10 30 17 20 ");
//	test.printPreOrder(out, test.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test: PostOrder_RightHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("6 8 10 9 7 20 17 30 15 5 ");
//	test.printPostOrder(out, test.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test: Breadth_RightHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("5 15 7 30 6 9 17 8 10 20 ");
//	test.printBreadthFirst(out, test.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test2 Insert_LeftHeavy")
//{
//	test2.insert(30);
//	test2.insert(20);
//	test2.insert(25);
//	test2.insert(10);
//	test2.insert(13);
//	test2.insert(5);
//	test2.insert(26);
//	test2.insert(29);
//	test2.insert(15);
//	test2.insert(3);
//	REQUIRE(test2.getRoot()->num == 30);
//	REQUIRE(test2.getRoot()->left->left->left->left->num == 3);
//	REQUIRE(test2.getRoot()->left->left->left->num == 5);
//	REQUIRE(test2.getRoot()->left->left->num == 10);
//	REQUIRE(test2.getRoot()->left->num == 20);
//	REQUIRE(test2.getRoot()->left->left->right->right->num == 15);
//	REQUIRE(test2.getRoot()->left->left->right->num == 13);
//	REQUIRE(test2.getRoot()->left->right->right->right->num == 29);
//	REQUIRE(test2.getRoot()->left->right->right->num == 26);
//	REQUIRE(test2.getRoot()->left->right->num == 25);
//}
//
//TEST_CASE("Test2: InOrder_LeftHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("3 5 10 13 15 20 25 26 29 30 ");
//	test2.printInOrder(out, test2.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test2: PreOrder_LeftHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("30 20 10 5 3 13 15 25 26 29 ");
//	test2.printPreOrder(out, test2.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test2: PostOrder_LeftHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("3 5 15 13 10 29 26 25 20 30 ");
//	test2.printPostOrder(out, test2.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test2: Breadth_LeftHeavy")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("30 20 10 25 5 13 26 3 15 29 ");
//	test2.printBreadthFirst(out, test2.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//
//TEST_CASE("Test3: Insert_Symmetrical")
//{
//	test3.insert(20);
//	test3.insert(15);
//	test3.insert(25);
//	test3.insert(10);
//	test3.insert(17);
//	test3.insert(24);
//	test3.insert(30);
//	test3.insert(5);
//	test3.insert(31);
//	test3.insert(28);
//	test3.insert(14);
//
//	REQUIRE(test3.getRoot()->num == 20);
//	REQUIRE(test3.getRoot()->left->num == 15);
//	REQUIRE(test3.getRoot()->left->left->num == 10);
//	REQUIRE(test3.getRoot()->left->left->left->num == 5);
//	REQUIRE(test3.getRoot()->left->left->right->num == 14);
//	REQUIRE(test3.getRoot()->left->right->num == 17);
//	REQUIRE(test3.getRoot()->right->num == 25);
//	REQUIRE(test3.getRoot()->right->right->num == 30);
//	REQUIRE(test3.getRoot()->right->right->right->num == 31);
//	REQUIRE(test3.getRoot()->right->right->left->num == 28);
//	REQUIRE(test3.getRoot()->right->left->num == 24);
//}
//
//TEST_CASE("Test3: InOrder_Symmetrical")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("5 10 14 15 17 20 24 25 28 30 31 ");
//	test3.printInOrder(out, test3.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test3: PreOrder_Symmetrical")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("20 15 10 5 14 17 25 24 30 28 31 ");
//	test3.printPreOrder(out, test3.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test3: PostOrder_Symmetrical")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("5 14 10 17 15 24 28 31 30 25 20 ");
//	test3.printPostOrder(out, test3.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
//TEST_CASE("Test3: Breadth_Symmetrical")
//{
//	std::ostringstream out;
//	std::ostringstream answer;
//	answer.str("20 15 25 10 17 24 30 5 14 28 31 ");
//	test3.printBreadthFirst(out, test3.getRoot());
//	REQUIRE(out.str() == answer.str());
//}
//
