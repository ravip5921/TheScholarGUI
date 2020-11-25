namespace BookAdder
{
    float X = -3.5;
    float Y = 6;
    float W = 10;
    float H = 1.5;
    float gap = 2;
    Color boxC(0.324, 0.678, 0.9);
    Color boxTextC(0.45, 0.05, 0.17);
    Color textC(1, 1, 1);
    Color titleC(0, 1, 0);
    Color addButtonC(0.7, 0.1, 0.9);

    Coord_Rect NameD(X, Y, W, H);
    Coord_Rect AuthorD(NameD, 'y', -gap);
    Coord_Rect GenreD(AuthorD, 'y', -gap);
    Coord_Rect DateD(GenreD, 'y', -gap);
    Coord_Rect ExtraDesD(DateD, 'y', -gap);
    Coord_Rect NameDataD(ExtraDesD, 'y', -gap);
    Coord_Rect addBookButtonD(X + 4, Y - (6.5 * gap), 3.4, 1.8);

    Text titleT(X + 1, Y + 2, titleC, "Add a new book:", GLUT_BITMAP_TIMES_ROMAN_24, true, addButtonC, 5, 1.5);
    Text NameT(X - 6, Y, textC, "Name:", GLUT_BITMAP_HELVETICA_18);
    Text AuthorT(X - 6, Y - gap, textC, "Author:", GLUT_BITMAP_HELVETICA_18);
    Text GenreT(X - 6, Y - (2 * gap), textC, "Genre:", GLUT_BITMAP_HELVETICA_18);
    Text DateT(X - 6, Y - (3 * gap), textC, "Published Date:", GLUT_BITMAP_HELVETICA_18);
    Text ExtraDesT(X - 6, Y - (4 * gap), textC, "Extra Description:", GLUT_BITMAP_HELVETICA_18);
    Text NameDataT(X - 6, Y - (5 * gap), textC, "Book Name in Database:", GLUT_BITMAP_HELVETICA_18);
    Text NameDataTE(X - 6, Y - (5.2 * gap), textC, "(With Extension)", GLUT_BITMAP_HELVETICA_12);

    TextBox NameB(NameD, boxC, boxTextC, true);
    TextBox AuthorB(AuthorD, boxC, boxTextC);
    TextBox GenreB(GenreD, boxC, boxTextC);
    TextBox DateB(DateD, boxC, boxTextC);
    TextBox ExtraDesB(ExtraDesD, boxC, boxTextC);
    TextBox NameDataB(NameDataD, boxC, boxTextC);

    Button AddBookButton("Add Book ", addButtonC, textC, addBookButtonD);

    void addBookAdderComponents(GUIPage *_page)
    {
        AddBookButton.setFont(GLUT_BITMAP_HELVETICA_18);
        _page->addComponent(&titleT);
        _page->addComponent(&NameT);
        _page->addComponent(&AuthorT);
        _page->addComponent(&GenreT);
        _page->addComponent(&DateT);
        _page->addComponent(&ExtraDesT);
        _page->addComponent(&NameDataT);
        _page->addComponent(&NameDataTE);
        _page->addComponent(&NameB);
        _page->addComponent(&AuthorB);
        _page->addComponent(&GenreB);
        _page->addComponent(&DateB);
        _page->addComponent(&ExtraDesB);
        _page->addComponent(&NameDataB);
        _page->addComponent(&AddBookButton);
    }

} // namespace BookAdder
